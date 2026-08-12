# Chapter 1 Exercises

Exercises under the heading **Assessment Exercises** must be completed as part of the Set Exercises assessment. You will find additional optional exercises which can be completed to gain higher marks.

For each exercise you should create a new project with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish; only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

## Assessment Exercises

### Simple HTML Document :ballot_box_with_check:

Create a new index.html file and include the following:

* All of the mandatory elements necessary in a basic HTML document.
* Six headings using all of the `<h>` tags.
* A paragraph of text underneath your headings.
* Make sure the code is indented and spaced properly.
* Add comments explaining what each element does.

### Fix me :ballot_box_with_check:

Copy the below `index.html` and `syles.css` code into two seperate files in a new Fix Me folder.

Look through both files and fix all of the errors that you can find. Do the following:

* Ensure that styles.css is appropriately linked in your index.html file
* Fix Missings tags, incorrectly typed tags, spelling mistakes, missing brackets etc.
* Make sure the code is indented and spaced properly.
* Add comments explaining what each line of the code does.

#### index.html:

```<!DOCTYPE html and css>
<html lang="en">
  <head>
    <title>Understandng the Web</title><meta charset="UTF-8" /><meta http-equiv="X-UA-Compatible" content="IE=edge" /><meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <link rel="styles" type="text/css/web" /><title>Understandng the Web</title>
  </head>
  <body>
<header1Understanding the Web</header1>
                                                                                                                                        <p id="author">
      by
      <!-- enter fictional name here before submitting and then remove this comment -->
    </p>
    <h2>The Internet p>MDN Web Docs defines The Internet in the following way:</p>
          <blockquote></blockquote>The Internet is the backbone of the Web, the technical infrastructure that makes the Web possible. At its most basic, the Internet is a large
      network of computers which communicate all together.</blockquote>
    <p>
      For further information visit:
      <a href="https://developer.mozilla.org/en-US/docs/Learn/Common_questions/How_does_the_Internet_work" class="link" target="_blank"
        >MDN Docs: How does the internet work?</a
      >.
    <h2 class="headingSpacer">The Webb</h2><p>MDN Web Docs defines The Internet in the following way:</p>
    <blockquote>An interconnected system of public webpages accessible through the Internet. The Web is not the same as the Internet: the Web is one of many applications built on top of the Internet.<blockquote>
    <p><a href="https://developer.mozilla.org/en-US/docs/Glossary/World_Wide_Web" class="link" target="_blank">MDN Docs: World Wide Web?</a>.
      For further information visit</p><h3 class="headingSpacer">A Website</h2>
    <paragraph>MDN Web Docs defines The Internet in the following way:</p><blockquote>
      A website is a collection of link3d web pages (plus their associated resources) that share a unique domain name. Each web page of a given
            website provides explicit links—most of the time in the form of clickable portion of text—that allow the user to move from one page of the
      website to another.
             </blockquote>
            <p><!-- Random comment that needs to be removedFor further information visi:
      <a href="https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Pages_sites_servers_and_search_engines" class="link" target="_blank"
        >MDN Docs: What is the difference between webpage, website, web server, and search engine?</a
      >.
    </p>
    <h4 class="headingSpacer">A Webpage</h2>
            <p>MDN Web Docs defines The Internet in the following way:</p>
    <blockquote>
 A web page is a simple document displayable by a browser. Such documents are written in the HTML language. A web page can embed a variety of
      different types of resources.
    </blockquote>
    <p>
      For further information visit:
      <a href="https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Pages_sites_servers_and_search_engines" class="link" target="_blank"
                      >MDN Docs: What is the difference between webpage, website, web server, and search engine?</a
      >.
    </p>
                                                                            </body>
</htm>
```

#### style.css:

```/* General styles */

html {
  text: 18px;
  font-family: Arial, Helvetica, sanz-serif;
                                         colour: #e2e2e2;
  padding: 5% 5%;
}
<br>
body {
                            background-color; #29283d:
}

                                                              h1 {
  font-size: 3rem;
  text-decoration: underline;
                         text-transform: uppercase;
  text-align: center;
  margin-bottom: 2rem;
}h2 }
  text-font-size: 2rem;
  line-height: 1.3rem;
  font-colour: #ffea7d;
}h3                    {


  size: 1.5rem;
                                                       line-height: 1.3rem;
}

p


{
  line-height: 1.5rem;
}

blockquote {
  l   ine-height: 1.5rem;
}

.link {
  colour: 0887f2;
}

.headingSpacer {
  margin-top: 3rem;
}

#author {
  font-style: italic;
  text-align: center;
}
```

Your working code should produce the following result:

![image](../FixMe_End_Result.png)

### Replace Me :ballot_box_with_check:

Copy the below index.html code into a new file. Replace all of the inline CSS with a new external CSS document.

Hint: In order to complete one part of this you will need to understand how to use CSS classes.

Hint2: You should aim to achieve this using only four blocks of CSS in your style.css document.

```<!DOCTYPE html>
<html lang="en" style="background: #eeeeee">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Replace Me</title>
  </head>
  <body>
    <h1 style="font-size: 35px; color: #ff0000; text-align: center; font-family: Arial, Helvetica, sans-serif; text-decoration: underline">
      Remove all of the Inline CSS
    </h1>
    <p style="font-size: 18px; color: #111111; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
    <p style="font-size: 18px; color: #111111; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
    <p style="font-size: 18px; color: #111111; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
    <p style="font-size: 18px; color: #111111; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
    <p style="font-size: 18px; color: #111111; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
    <p style="font-size: 18px; color: #00ff00; font-weight: 700; font-family: Georgia, 'Times New Roman', Times, serif">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate
      velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit
      anim id est laborum.
    </p>
  </body>
</html>
```

## Bonus Assessment Exercise

### HTML and CSS Resource

Create a HTML & CSS quick-reference guide that covers all of the tags we've covered so far (and a few extras) with a description of how to use them and code examples.

* Use an external stylesheet.
* Be creative with your styling, but keep it professional.
* Use the `<code>` and `<pre>` HTML tags to include code examples.
* Include a minimum of 10 HTML tags.
* Include a minimum of 8 CSS properties.
* Include a variety of different headers.
* Make sure the code is indented and spaced properly.
