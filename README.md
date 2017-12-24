# yoursyscall
Final Project of the Course Project Workshop of Operating System. 

Add a system call "yoursyscall" to Minix operating system.

## Environment

Minix 3.1.8 version

## Description

This project is the final project of the course Project Workshop of Operating System. In this project, I added a new system call named “yoursyscall” to the Minix. The “yoursyscall” had two arguments: “arg” and “deadline”. When a process calls “yoursyscall,” it will get more chance to run. The bigger the “arg” value, the more chance to run. The “deadline” parameter means that if this process is not over after calling “yoursyscall” “deadline” seconds, it will be forced to end. Meanwhile, process which is more closer to the deadline will get more running opportunities.

