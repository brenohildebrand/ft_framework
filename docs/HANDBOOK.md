# Handbook

This is the official handbook for ft_framework.

## Summary

* [Introduction](#introduction)
* [Getting Started](#getting-started)
* [Concepts](#concepts)
* [Modules](#modules)

## Introduction

Just to give you some context and to explain my motivations.

I was struggling with C. I wanted to use hash tables. Oh, but they don't exist. Dynamic arrays? Sorry, what's that? Maybe a string? Unfortunately that's not happening. Hmm.. And what about memory management? Can I just exit the program and be happy? No, there may be a leak. Oh, so can I just call one function to free it all? No, it's not how it works. Damn it! I wanted to be able to focus on the problem, not on these low-level details and that's when I started looking for solutions.

I experimented quite a lot before getting to something cool. I tried different approaches, tried to combine them in many ways, and then I finally got to something I'm proud of.

Welcome to **ft_framework**!

## Getting Started

### It works on my machine.

Before getting to the deep dive, you should make it works on yours too. Start by cloning it to a comfortable folder on your computer.

```bash
git clone git@github.com:brenohildebrand/ft_framework.git
```

Now add `ft_framework/tools/trillian/bin` to your `$PATH`. And that's it.

## Concepts

If you don't already know, a project using this framework can be initialized with ```trillian init```. It will create the directories needed and you can start coding right away.

Every source code you create should be under source and every test should be under tests.

trillian is a cool and helpful tool

You got to use types and functions

two ways to build your code ... build and debug  
run with trillian run

create your own types  
expand the framework

system call errors will make the program to exit  
if you want to avoid that check for whatever you need before calling the function  
(i.e. check if path exists before creating a file)

## Go hack it!

Congratulations for reading this far. Now you know how to use the wannabe famous *ft_framework*. Since you got the power you can do whatever you want with it. Make it better, make it yours. And if you fell like contributing just check out [this](./CONTRIBUTING.md).

May your code be bug-free. See ya!


## Modules

### Memory

#### Purpose

The memory module is responsible for managing memory allocation and
deallocation safely. It is also responsible for keeping track of the types
associated with each allocated block.

#### Usage

The memory module provides two primary functions: 'allocate' and 'deallocate'.
That's all you need from here.

#### Examples

```c
void	*pointer;

pointer = allocate(42);
deallocate(pointer);
```

#### Implementation Details

Initialized to zero.

Under the hood it's a self balanced binary tree.
Beware that you should use the 'new' and 'delete' functions instead of 'allocate' and 'deallocate' when creating and destroying types.
If anything goes wrong here, the module will free every allocated memory and exit the program.


### Types

#### Purpose

The types module defines the type system of ft_framework. It 

#### Usage

#### Notes

### Console

#### Purpose

#### Usage

#### Notes

### Control

#### Puurpose

#### Usage

#### Notes