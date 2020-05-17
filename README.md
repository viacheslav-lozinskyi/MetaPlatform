## What is MetaPlatform?

This technology is necessary for that who solve next issues:
- Write the same code for different platforms;
- Write the same code using different languages;
- Write the same code using different compilers;
- Write the same code using different toolsets;
- Convert own project from one technology to another one.

Usually it's difficult and expensive.
Usually it's a reason why products are implemented just on one platform using one language.
Usually it's a reason to use Java.

### Why MetaPlatform?

Java is solution, but it's also too expensive, because necessary to rewrite fully your code.
Not so good decision looking on it...

May be STL or Boost?
It's standard solution for C++ projects, and it's looks better, hovewer if necessary to use such C++ code with .NET code it will be additional problem. Sugnificant problem...
Moreover STL and Boost add own code which consume resources and may have own bugs.

Any other cross-platform libraries have such problems too.

So MetaProject is created as answer on that problems.

### Benefits

- MetaPlatform provide seemless integration to any desired platform;
- MetaPlatform uses types and classes of target platform;
- MetaPlatform don't have any own code at all;
- MetaPlatform don't have any own bugs at all;
- MetaPlatform don't consume any resources;
- MetaPlatform can be expanded for support of any platform;
- MetaPlatform can be expanded for support of any language;
- MetaPlatform can be expanded for support of any compiler;
- MetaPlatform can be used for converting of existing project by step-by-step approach;
- MetaPlatform can be used for converting from any technology to any technology.

### Approach

This technology contains only macroses on C/C++ language.
All types and operations are expresed just by those macroses.

This is short example which demonstrate how to use it:
```cpp
  auto size = MP_VECTOR_SIZE_GET(collection);
  for (auto i = 0; i < size; i++)
  {
     __Execute(url, MP_VECTOR_GET(collection, i));
  }
```

### Comunity

I will glad to invite any developers who need this product and want to develop of MetaPlatform.
You participation can make product better...
