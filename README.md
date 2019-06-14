Read the whole document here: https://coding4food.net/2019/06/14/201906-gecko-dom-logging-system

# 5. Development

## 5.1. Design solution

My solution is simple. Log into an array, then count for each time a function name is repeated.

First, I created a class to hold each record

```cpp
class DomLogNode
{
public:
	DomLogNode();

	void setNode(string name, int count);
	int increaseCount();
	bool compareName(string nameToCompare);
	int getCount();
	string getName();

private:
	string functionName;
	int count;
};
```

Then, I created another class to hold the list of record. This class is static

```cpp
static class DomLog
{
public:
	void recordLog(string functionName);
	void pushNewName(string functionName, int initialCount = 1);
	void getDomLogs();
	void exportFile(string path);

private:
	vector<DomLogNode> domLogs;
} domLog;
```

Method `exportFile(string path)` write the list to a csv file, using simple c++ file library.

**Get the caller method name**
In cpp, to get the current method name, we can use the static variable `__func__` as stated here: https://docs.microsoft.com/en-us/cpp/cpp/func

> You can get the whole source code at my Github [repository](https://github.com/huntertran/gecko-dom-log.git)

## 5.2. Firefox integration

Unfortunately, the Firefox source code system (using mercurial source control) is buggy lately. It close the connection way before the clone process finished.

Firefox implement DOM API all over the source code. For example, the API `getElementById` is implemented in 3 different places:

* `dom\base\AnonymousContent.h` with corresponding implementation
* `dom\base\DocumentOrShadowRoot.h` with corresponding implementation
* `dom\base\nsINode.h` with corresponding implementation

The method inside `nsdINode` have a comment

```cpp
// Document and ShadowRoot override this with its own (faster) version.
// This should really only be called for elements and document fragments.
```

This mean, to correctly record how many time the GetElementById is called, we have to modify the code of all 3 methods.

```cpp
domLog.recordLog(__func__);
```

This quickly getting out of hand, since there are hundreds of DOM API we need to log, and I am still looking for another solution.
