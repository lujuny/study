<details>
    <summary>md simple note</summary>

# head

## head

### head

- unordered list
- unordered list
- unordered list

1. ordered list
2. ordered list
3. ordered list

[link](https://www.google.com)

**highlight**
*Itali*

> block test

````cpp
//code block
/**
 *
 *Filename: readme.md
 *Created in 2023/01/22 12:50:38
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv){
    cin.tie(0);
    

    return 0;
}

````

</details>

<details>
    <summary>fold</summary>

## How to fold part of content

```md
<details>
<summary>Click me </summary>

### Heading

1. Foo
2. Bar
   - Baz
   - Qux

### Some Code

``js

function logSomething(something) {  
 console.log('Something', something);  
}
``

</details>
```

## Example

<details>
    <summary>Click me</summary>

### Heading

1. Foo
2. Bar
   - Baz
   - Qux

### Some Code

```js
function logSomething(something) {
  console.log("Something", something);
}
```

</details>

## You can use this in vscode by configuring your markdown.json like this below:

```json
{
  "markdown snippet": {
    "prefix": "foldable", //key word to activate this snippet
    "body": [
      "<details>",
      "    <summary>$1</summary>",
      "",
      "$2",
      "</details>",
      ""
    ],
    "description": "foldable content"
  }
}
```

## Rules

1. Have an **empty line** after the `</summary>` tag or markdown/code blocks will not render.
2. Have an **empty line** after each `</details>` tag if you have multiple collapsible sections.

</details>
