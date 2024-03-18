# Trapezoid Approximation:

*Duct tape? Maybe... but it works like a charm!*

Provided our integral and the approximation of sin as a trapezoid wave, we obtain a simplified form of the integral which can be solved for analytically.

$$
sin(\theta) =  \begin{cases}
  \theta \text{ if } |\theta|<1 \\
  1 \text{ if } 1<\theta<\pi/2 \\
  -1 \text{ if } -\pi/2<\theta<-1
  \end{cases}
$$

$$
\vec{B}(\beta) = \vec{K} f(\beta) \qquad \vec{K}=\frac{\mu_0I\hat{k}}{4\pi a}
$$

$$
f(\beta) = 2\int_{-\pi/2}^{\pi/2} \frac{1+\beta\sin(\theta)}{(\beta^2+2\beta\sin(\theta)+1)^{3/2}} d\theta
$$

$$
f(\beta) \approx g(\beta) = 2\int_{-1}^{1} \frac{1+\beta\theta}{(\beta^2+2\beta\theta+1)^{3/2}} d\theta + 2\int_{-\pi/2}^{-1} \frac{1-\beta}{(\beta^2-2\beta+1)^{3/2}} d\theta + 2\int_{1}^{\pi/2} \frac{1+\beta}{(\beta^2+2\beta+1)^{3/2}} d\theta 
$$

$$
g(\beta) = 2(\text{sgn}(x+1)-\text{sgn}(x-1)+(1-\pi/2)(\frac{\text{sgn}(x-1)}{(x-1)^2} - \frac{\text{sgn}(x+1)}{(x+1)^2}))
= 2 \text{sgn} (x+1) (1+\frac{\pi/2-1}{(x+1)^2} ) - 2 \text{sgn}(x-1) (1+\frac{\pi/2-1}{(x-1)^2})
$$

# Notes:
This approximation has these major benefits:
- **The same shape**: The function diverges as $` \beta \to \pm 1 `$, is negative\positive and increases\decreases over the same intervals as the analytical solution in its domain, and approaches '0' as $`|\beta|`$ gets larger.
- **Computationally efficient and algebraic**: By allowing us to find the antiderivatives in algebraic terms, this approximation is extremely fast to compute. However, it is considerably more complicated to process compared to the raw small angle approximation.
- **A complete domain**: By damping the extreme behavior of the small angle approximation at our end-points, we preserve the poles and have an approximation over the whole domain of $`f`$. 

This approximation provides a complete algebraic approximation for the magnetic field. However, there are numerous downsides to this approximation:
- **Inaccurate as** $` \beta \approx \pm 1 `$: Over its valid domain, $`g(\beta)`$ is least accurate as you approach the poles of $`f`$. This is bad, as this is the same range over which the majority of the magnetic field lines exist, meaning the interval for which this approximation fails is also arguably the most interesting and useful value-range for $`\beta`$ for those studying the fields.
- **Overshoots**: $`|g(\beta)|`$ is always greater than $`|f(\beta)|`$.
- **Difficult to improve on**: There is no clear way to improve the approximation iteratively or otherwise. We may attempt to optimize the small-angle component of this approximation by finding a slope which makes the average of the trapezoid wave more like the average value of sin, but at the potential cost of structural elegance and simplicity.
