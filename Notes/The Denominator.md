# The Denominator

The most challenging component of the integral is the denominator.

$$
f(\beta) = 2\int_{-\pi/2}^{\pi/2} \frac{1+\beta\sin(\theta)}{(\beta^2+2\beta\sin(\theta)+1)^{3/2}} d\theta
$$

Denominator: 

$$
(\beta^2+2\beta\sin(\theta)+1)^{3/2}
$$

This structure is the cubed-distance away from the current-component to our point, written as the familiar Law of Cosines.

Consider the squared distance as a polynomial function of $`\beta`$ with parameter $`\theta`$ :

$$
P(\beta | \theta)=\beta^2+2\beta\sin(\theta)+1
$$

 The parameter generates a smooth continuum of polynomial functions that are like 'between states' with vertexes in the form of $`V(b) = (-\sin(b),\cos^2(b))`$ or $`V(x) = (x,1-x^2), \quad |x|\leq 1`$.
- At the max for $`sin(\theta)`$, $`\quad P(\beta)=\beta^2+2\beta+1=(\beta+1)^2`$.
- At the min, $`P(\beta)=\beta^2-2\beta+1=(\beta-1)^2`$.
- At the root, $`P(\beta)=\beta^2+1`$.

Sometimes, such as in the max or min case (that is, the case in which all vectors are colinear), the denominator can be written as the square of a binomial, and also potentially cancel with the denominator.
This is also the only instance in which the quadratic has a root (values outside this domain have imaginary ranges). The polynomial therefore can only ever have one or no real roots, which also ensures that the domain is either $`\mathbb{R}`$ or $`\mathbb{R} \pm {1}`$.

In the case of our small-angle approximation, the max/min is lifted all the way to $`\pm\pi/2`$. This creates a range of polynomials which have two roots and a negative part, which lies outside the domain of the square-root.
- This explains why the small-angle approximation result has an incomplete domain.
- This also suggests that we should look for approximations which *strictly bound* the function as $`P(\beta | \theta)>0, \quad -\pi/2<\theta<\pi/2`$
