# bazel-sandbox
A sandbox to experiment with bazel

# Important Bazel concepts
A workspace is a directory that contains your project's source file and Bazel's build outputs.
- `WORKSPACE` - File that identifies the directory and its contents as a Bazel workspace. It lives at the root of the project's directory structure.
- `BUILD` - Files that tells Bazel how to build parts of the project. A directory within the workspace that contains a `BUILD` file is a **package**.
- A **target** is an instance of a build rule and it points to a specific set of source files and dependencies. A target can also point to other targets.

# Build the project
To build the project, run the following command line:
`bazel build //main:hello-world`

Note that `//main:hello-world` is the target label.

To test the built binary run `.\bazel-bin\main\hello-world.exe` on windows and `bazel-bin/main/hello-world` on linux.

# How to use labels to reference targets
In `BUILD` files and at the command line, Bazel uses labels to reference targets - for example, `//main:hello-world` or `//lib:hello-time`. Their syntax is:

`//path/to/package:target-name`

If the target is a rule target, then `path/to/package` is the path to the directory containing the BUILD file, and `target-name` is what you named the target in the `BUILD` file (the name attribute). If the target is a file target, then `path/to/package` is the path to the root of the package, and `target-name` is the name of the target file, including its full path.

When referencing targets at the repository root, the package path is empty, just use `//:target-name`. When referencing targets within the same BUILD file, you can even skip the // workspace root identifier and just use `:target-name`.

# Remarks
- `BUILD` files register targets via making calls to rules. `.bzl` files provide definitions for constants, rules, macros, and functions.