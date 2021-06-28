# quicksort
> A tutorial for quicksort and speeding it up with some different methods

## 0. Before we begin
This tutorial is not just a tutorial for you to learn more about quicksort and different ways to use it with different technologies. I am also using this to help teach myself. Each folder in this directory is another self-sufficient directory, with a main program of which you could run to test it. At the end of this readme I have stated good resources I found on some part of this, as well as future goals I would like to attempt to either add or look into. Moving forward, let's start with describing what quicksort is.

The 7th edition of *A dictionary of Computer Science* stats that quicksort is
> "A form of sorting by exchanging due to C. A. R. Hoare. By comparing sortkeys from the two extremes of the file, and alternately working up from the file from the bottom until an exchange is necessary and then working down the file from the top, the original problem can be reduced to two smaller problems. The same process is then applied to each part, and is further repeated until the problems are trivally small."

While that definition is definately true, we can go ahead and further simplfy it by breaking it down the process. The quicksort is an algorithm that takes in items to sort, then sort them through splitting them up to different groups based on a pivot choice.

## 1. The Algorithm
The basic algorithm of quicksort is as follows:
1. choose a "pivot" number inside the list
2. Iterate through the list putting everything that is below the pivot in value to the left of the pivot, and keeping everything higher than the pivot on the right.
3. You now have two lists (be using the old starting point and the pivot, and another with the pivot and the old ending point) that needs to be sorted, but no number should need to cross the pivot; This allows you to keep iterating through this algorithm until everything is sorted.

## 2. Basic Program
In the folder...

## 5. Collected Data


## Extra: Other Resources

### Research Papers
* [CUDA-quicksort: an improved GPU-based implementation of quicksort](https://onlinelibrary.wiley.com/doi/full/10.1002/cpe.3611) - Emanuele Manca, Andrea Manconi, Alessandro Orro, Giuliano Armano, Luciano Milanesi
* [Refined quicksort asymptotics](http://web.b.ebscohost.com/ehost/detail/detail?vid=0&sid=9952dd26-7d37-4ce3-ae08-c3b938166401%40pdc-v-sessmgr03&bdata=JnNpdGU9ZWhvc3QtbGl2ZSZzY29wZT1zaXRl#AN=100398822&db=aci) - Ralph Neininger
* [Quicksort](https://watermark.silverchair.com/050010.pdf?token=AQECAHi208BE49Ooan9kkhW_Ercy7Dm3ZL_9Cf3qfKAc485ysgAAAtgwggLUBgkqhkiG9w0BBwagggLFMIICwQIBADCCAroGCSqGSIb3DQEHATAeBglghkgBZQMEAS4wEQQMWqvIm4C3HgSFSOi0AgEQgIICiywnLxtRMJ8AAPqnvzvWSe98utdhDWYVzsPiCRxkqxD6nvOMmDwPIA-p0NFosdRsBnUvVRzUOzCqSrg6XDjlLWYbRHi1r05sAl1aTaA60Rix0I8svCyyjF56iZG0YF9JIYOMWc3O8bs3-yLIYDocQBq7BBKXiVeFT4UI-_bgppp89qc9Y63k5nZiJIaVCZ6wVoWbbC8TIYZoKJq-xTd9XvfVoAQCihra0DVvKZcUftxXFCIDy7D9MEI-g4HQVROXxt9G6eFeqBkeff8q2Ocr9LeLnG2zUJ9bfRENbtkW-q1X5mFsg44_gJzMkndH3EbaYCtF0ztDNVFCJiujJYnpQ0n7xQnMDc9ESphNQmjNdbMO5-qM1ebXcNAMV303-l-FIcJ8ku5AVJwHmN4nDz9i-fyQjVDjR5D6zn1pNh5ZWED5rV3ffKb-gs4OuRnQ5c_UY8-TYckiRaErVBiBDV0hjFCZVhAcG3ihel5hMx2rLntfI0h04rNR8ojXagx_0P94TlfgAA3tKRVrEUKzEBjnqC_SQw8FX_yXIUHDWS9n6ce9IjoGpBaridsdiW_vdt_1FnCckQrIlDZwHgjV3nWo8kAgwvqtxrvbQjk4BcmSFfHEh7IEL7xlGjr7n5kazrYINPLeMRFbfdZlyRN4fFWi0c7y6uV4_B6dJ9Y5tLgfm3QUNeHXmPX4iowDA13-O1IbtBWtSuq1B-1l_O4MIWlKphwxtvhQn-r-h-uU10VdXCtBa0o9VFX4H04CwfnADNr3PlK7Pmw4yRssA38iVmg1vTlgmFhF5tCj36jnGW_ihz_yyfPJtMB6gjO5_KBJaXCWZPFNxqDlhB-j25BGVOvHiO3k9oqyY9JAaOgSiQ) - C. A. R. Hoare

### Articles
* [Sorting Algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm) - Wikipedia
* [QuickSort](https://geeksforgeeks.org/quick-sort/) - geeksforgeeks
* [QuickSort (With Code)](https://programiz.com/dsa/quick-sort) - programiz

### Videos
* [The Quicksort Sorting Algorithm](https://www.youtube.com/watch?v=uXBnyYuwPe8) - Back to Back SWE on Youtube
* [Quicksort in 4 minutes](https://www.youtube.com/watch?v=Hoixgm4-P4M) - Michael Sambol on YouTube
* [Algorithms: Quicksort](https://www.youtube.com/watch?v=SLauY6PpjW4&t=432s) - HackerRank on YouTube
* [A Complete Overview of Quicksort](https://www.youtube.com/watch?v=0SkOjNaO1XY) - CS Dojo on YouTube


## Extra: Goals with research
1. Basic C Program
2. GPU C Program
3. CPU C Porgram
4. Basic Python Program
