# Contributing

Want to contribute? Great! First, read this page.


### Code reviews

Before sending code reviews, run `bazel test ...` to ensure tests are passing.

Code changes are accepted via [pull request][github].

When approved, the change will be submitted by a team member and automatically
merged into the repository.


### Bug IDs

Some TODOs and NOTEs sprinkled throughout the code have associated IDs of the
form `b/1234`. These correspond to bugs in our internal bug tracker. Eventually
these bugs will be moved to the GitHub Issues, but until then they can simply be
ignored.

### Build and test with Docker

Running `make dev` is a convenient way to build and install `runsc` as a Docker
runtime. The output of this command will show the runtimes installed.

You may use `make refresh` to refresh the binary after any changes. For example:

```bash
make dev
docker run --rm --runtime=my-branch --rm hello-world
make refresh
```
