### Automatic Cat Feeder for my Fat Cat

## Why automatic?
Well, automatic means that I know when the cat has been fed. No more arguing over if he has gotten food yet because the cat has gotten it. 

## What it does
It feeds the cat!

## How I built it
Used an arduino to run the servo. The servo is set at specific intervals to open and close the gate. In the demonstration, it's set to wait 30 seconds between feeding and 10 seconds between opening and closing the gate. Obviously in real life I would set the wait for food to be a few hours, but 30 seconds is just for demonstration purposes. 

## Challenges I ran into
A challenge I ran into was figuring out the orientation for the servo to open and close. For some reason it was really difficult for me to see which way 90 degrees meant to the arudino. Another issue I ran into was setting the wait time. Initially I found a blog post that used an `if statement` to check if the time was up but then I just ran into issues with the servo not running. I then found that `delay()` worked perfectly because it already sets a time for which the servo will wait to run. Hooray! 

## Accomplishments that I'm proud of
I'm proud that I made something. This isn't my first hackathon, but it's my first completed project at a hackathon. I'm also proud that I've finally started tinkering with hardware :)

## What I learned
I learned a lot about hardware thanks to the Technica team. I also learned that even though I enjoy playing with and  making hardware, it's a lot harder to learn how it works as I am learning about circuits in school. 

## What's next for Automatic cat feeder
I want to make it prettier since cardboard boxes are an eyesore. I also want it so that it'll actually run without human help, but I don't think that it's going to happen unfortunately. I think that I broke the servo. Not too sure what happened as I left it running to go get tape and when I came back it would only click. It works when I plug it into the computer so I think that the 9v battery is just too weak, I don't know why though as it was working before. 

On the other hand, I have more side projects that involve hardware (and soldering!) and I'm really excited to start working with that. 

