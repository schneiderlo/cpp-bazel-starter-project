# bazel-sandbox
A sandbox to experiment with bazel

# Important Bazel concepts.
A workspace is a directory that contains your project's source file and Bazel's build outputs.
- `WORKSPACE` - File that identifies the directory and its contents as a Bazel workspace. It lives at the root of the project's directory structure.
- `BUILD` - Files that tells Bazel how to build parts of the project. A directory within the workspace that contains a `BUILD` file is a **package**.
- A **target** is an instance of a build rule and it points to a specific set of source files and dependencies. A target can also point to other targets.

# Build the project.
To build the project, run the following command line:
`bazel build //main:hello-world`

Note that `//main:hello-world` is the target label.

To test the built binary run `.\bazel-bin\main\hello-world.exe` on windows and `bazel-bin/main/hello-world` on linux.