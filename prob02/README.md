# Credit Card Approval
Create a program that will recommend a credit card to a customer based on their credit score. The list below shows the required credit scores for each type of credit card. Be sure and use constants in your code rather than integer literals.

```
0   -  579: Ineligible for Tuffy credit cards
580 -  669: Eligible for the Silver Tuffy Card
670 -  799: Eligible for the Gold Tuffy Card
800 -  850: Eligible for the Platinum Tuffy Card
```

Take note that credit scores below 0 and above 850 are invalid. Inform the customer when they provide invalid credit score values.

Please see the sample output below to guide the design of your program. Note that <b>bold</b> values in the sample represent input by the user.

## Sample valid inputs
<pre>
Thank you for applying for the Tuffy Credit card. Please enter your credit score.
Credit Score: <b>600</b>

You are eligible for the Silver Tuffy Card.
Thank you for using our program, please come again!
</pre>

<pre>
Thank you for applying for the Tuffy Credit card. Please enter your credit score.
Credit Score: <b>560</b>

Unfortunately, you are ineligible for Tuffy credit cards at the moment. Please try again at a later date.
Thank you for using our program, please come again!
</pre>

## Sample invalid input
<pre>
Thank you for applying for the Tuffy Credit card. Please enter your credit score.
Credit Score: <b>900</b>

That is an invalid credit score. Please run the program again and provide a valid credit score.
</pre>

# Submission checklist
1. Compiled and ran the driver (main).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (make test).

# Code Evaluation

If you're using Replit, you can click the "Run" button and follow the prompts to build and test your code.

Otherwise:

Use the `make build` command to compile your code and save it into an executable file called `main`.
Then you can use the `./` command to run it. Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
make build
./main
```

Alternatively, you can use the `clang++` command to compile your code and the `./` command to run it. 
The sample code below shows how you would compile code in `main.cc` and into the executable file `main`. 

```
clang++ -std=c++17 main.cc -o main
```


## Run the unit tests

We've provided unit tests, which you can try with ``make test``. Use the output to help you debug any issues in your program.
For code style, make sure you follow advice from the stylechecker using ``make stylecheck``.
For code formatting, make sure you follow advice from the formatchecker to improve code readbility using ``make formatcheck``.

# Submission
1. When everything runs correctly,  let's copy your code into the GitHub repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type `git add .` (period) to add all modified files.

    ```
    git add main.cc
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit -m "Your description here"
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type the `git commit -m "Your description here"` command again.    
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and personal access token when you are asked.

    ```
    git push
    ```
1. Once you push, the autograder is automatically kicked off. Check the results in the 'Actions' tab - a green check means that all tests passed.
