# Stack and Queue

This repo contains a simple C++ console application demonstrating basic stack and queue operations using linked list nodes.

## Project Overview

- `Stack and Queue.cpp` contains the full implementation.
- `Stack` is implemented as a linked-list-based LIFO structure.
- `Queue` is implemented as a linked-list-based FIFO structure.
- The program stores sample messages for two people and provides a menu to:
  - display the current contents of the stack and queue
  - play back the conversation by popping from the stack and dequeuing from the queue

## Build Instructions

### Using Visual Studio

1. Open `Stack and Queue.sln` in Visual Studio.
2. Build the solution.
3. Run the executable from Visual Studio or the output folder.

### Using the command line with g++

If you have `g++` installed, run:

```bash
g++ "Stack and Queue.cpp" -o "Stack and Queue"
```

Then launch with:

```bash
./"Stack and Queue"
```

## Usage

1. Choose option `1` to display all messages currently stored in the stack and queue.
2. Choose option `2` to display the conversation in the order the stack and queue are processed.
3. Choose option `3` to exit.

## Notes

- The stack output shows Person 1 messages from newest to oldest.
- The queue output shows Person 2 messages from oldest to newest.
- Option `2` consumes the stored messages, so repeated playback is not available after the first run.
