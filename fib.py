
num = int(input("Enter a number between 25 and 40: "))

n1, n2 = 1, 1  #n1 and n2 reprent the first 2 numbers of fib sequence, which is 1 and 1 in this case. If I read correctly, Leonardo di Pisa actually started at 1 as well.
sum = 2  #accounts for sum of first two fib (n1, n2)
count = 2 #accounts for count of first two fib (n1, n2)
if num >= 25 and num <= 40:
    print(n1) #print 1
    print(n2) #print 1

    for i in range(2, num):
        new = n1 + n2   
        print(new)

        #reset n1 and n2
        n1 = n2    
        n2 = new   #n2 is now nth or otherwise n1 + n2

        #track sum and count number
        sum += new
        count += 1

    print("The sum of these numbers is:", sum)
    print("The count of these numbers is:", count)
    print("The average of these numbers is:", round(float(sum/count), 2))

else:
    print("Your number is not between the required integers. Please try again.")
