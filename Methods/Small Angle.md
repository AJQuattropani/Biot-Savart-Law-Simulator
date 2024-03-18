# Small-Angle Approximation:

Provided our integral and the classic small-angle approximation, we obtain a simplified form of the integral which can be solved for analytically.

$$
\sin (\theta) \approx \theta
$$

$$
\vec{B}(\beta) = \vec{K} f(\beta) \qquad \vec{K}=\frac{mu_0I\hat{k}}{4\pi a}
$$

$$
f(\beta) = 2\int_{-\pi/2}^{\pi/2} \frac{1+\beta\sin(\theta)}{(\beta^2+2\beta\sin(\theta)+1)^{3/2}} d\theta
$$

$$
f(\beta) \approx g(\beta) = 2\int_{-\pi/2}^{\pi/2} \frac{1+\beta\theta}{(\beta^2+2\beta\theta+1)^{3/2}} d\theta = \frac{2\beta+\pi}{\sqrt{\beta^2+\pi\beta+1}} - \frac{2\beta-\pi}{\sqrt{\beta^2-\pi\beta+1}}
$$

# Notes:
This approximation has three major benefits:
- **The same shape**: The function diverges as $` \beta \to \pm 1 `$, is negative\positive and increases\decreases over the same intervals as the analytical solution in its domain, and approaches '0' as $`|\beta|`$ gets larger.
- **Accuracy increases for large `a`**: As the radius of the loop increases, the approximation becomes more accurate over the valid domain independent of $`\beta`$.
- **Computationally efficient and algebraic**: By allowing us to find the antiderivative in algebraic terms, this approximation is extremely fast to compute.

This approximation provides a complete algebraic approximation for the magnetic field. However, there are numerous downsides to this approximation:
- **Inaccurate as** $` \beta \approx \pm 1 `$: Over its valid domain, $`g(\beta)`$ is least accurate as you approach the poles of $`f`$. This is bad, as this is the same range over which the majority of the magnetic field lines exist, meaning the interval for which this approximation fails is also arguably the most interesting and useful value-range for $`\beta`$ for those studying the fields.
- **Incomplete domain**: Even worse, this domain of the approximation is not complete for all members of the domain of $`f`$. Rather than the function existing over $`\mathbb{R}`$ except the expected poles at $` \beta = \pm 1 `$, the approximation $`g`$ has gaps near the poles, centered at $`\pm\frac{\pi}{2}`$.
  This means that the domain of $`g`$ is $` \beta \in (-\infty,\frac{ -\pi - \sqrt{\pi^2-4}}{2})\cup(\frac{ -\pi + \sqrt{\pi^2-4}}{2},\frac{ \pi - \sqrt{\pi^2-4}}{2})\cup (\frac{ \pi + \sqrt{\pi^2-4}}{2},\infty)`$
- **Difficult to improve on**: There is no clear way to improve the approximation iteratively or otherwise. We lose the ability to write an analytical solution as soon as we increase the expansion to $`\sin (\theta) \approx \theta - \theta^3/6`$.
