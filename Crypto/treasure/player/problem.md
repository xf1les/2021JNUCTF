One day, k1rit0 is playing the SwordArtOnline. After he beat the boss, he get five boxes. But before he open these boxes, he must solve corresponding crypto problem. If he want to get the final prize, he must know the secret number "S".

Now he know that there is one number in each box, and each number is the y-axis coordinates of one point on the curve $y = ax^3 + bx^2+cx + S$.  The x coordinate is the serial number of the box , and the $S$ in the function is the secret number.

Can you help the  cryptography rookie k1rit0 get the secret number?

flag is flag{sha256(str(S).encode()).hexdigest()}.

