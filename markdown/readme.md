
<details>
    <summary>fold</summary>
    
    sample:
    ## How to
    ````md
    <details>
    <summary>Click me</summary>
    
    ### Heading
    1. Foo
    2. Bar
        * Baz
        * Qux

    ### Some Code
    ```js
    function logSomething(something) {
        console.log('Something', something);
    }
    ```
    </details>
    ````

    ## Example
<details>
    <summary>Click me</summary>

  ### Heading
  1. Foo
  2. Bar
     * Baz
     * Qux
     
  ### Some Code
  ```js
  function logSomething(something) {
    console.log('Something', something);
  }
  ```
</details>

## Rules
1. Have an **empty line** after the `</summary>` tag or markdown/code blocks will not render.
1. Have an **empty line** after each `</details>` tag if you have multiple collapsible sections.

[citation](https://gist.github.com/pierrejoubert73/902cc94d79424356a8d20be2b382e1ab)
</details>