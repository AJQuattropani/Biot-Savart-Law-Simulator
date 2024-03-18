Let us begin with the general Biot-Savart Law:

$$
\vec{B}(\vec{x_0},\vec{J}) = \mu_0\int_{ \vec{x}\in\mathbb{R}^3 }\vec{dH}(\vec{x}-\vec{x_0},\vec{J}(\vec{x_0})) 
$$

$$
\vec{dH} = \frac{I}{4\pi}\frac{ \vec{dL} \times \vec{r} }{|\vec{r}|^3}
$$

<picture>
 <source media="(prefers-color-scheme: dark)" srcset="B-Field Coplanar Dark.png">
 <source media="(prefers-color-scheme: light)" srcset="B-Field Coplanar.png">
 <img alt="An image showing the problem's setup and relevant quantities." src="B-Field Coplanar Dark.png">
</picture>

We define the current to be 0 everywhere else except on the circular path $`\vec{l}`$ with radius $`a`$, where a constant current I is flowing in the positive direction, in the direction of dL:

$$
a = |\vec{l}| \implies \vec{l}(\theta) = \begin{bmatrix} a\cos(\theta) \\ 
  a\sin(\theta) \\
  0\end{bmatrix}
  \implies \vec{dl}(\theta) = a \begin{bmatrix} -\sin(\theta) \\ 
  \cos(\theta) \\
  0\end{bmatrix} d\theta , \quad 0<\theta<2\pi
$$

We then find the displacement vector between the position of the field $`\vec{x_0}=\begin{bmatrix} D \\ 
   0\\
   0\end{bmatrix}`$ and the current component:

$$
\vec{r} = \vec{x_0} - \vec(l) = \begin{bmatrix} D-a\cos(\theta) \\ 
  0-a\sin(\theta) \\
  0\end{bmatrix}
$$

In order to factor the radius as we did for $`\vec{dl}`$, we introduce a new variable $`\beta=D/a`$:

$$
\vec{r} = \vec{x_0} - \vec{l} = a \begin{bmatrix} \beta-\cos(\theta) \\ 
  -sin(\theta) \\
  0\end{bmatrix}
$$

We then find the cross product for the equation $`d\vec{H}`$:

$$
\vec{dL}\times\vec{r} = a^2\begin{bmatrix} \hat{i} & \hat{j} & \hat{k} \quad \\ 
  -\sin(\theta) & \cos(\theta) & 0\quad \\
  \beta-\cos(\theta) & -sin(\theta) & 0\quad \end{bmatrix} d\theta
  = a^2 \hat{k} (1-\beta\cos\theta) d\theta
$$

Finally, we find the cubed-magnitude of $`\vec{r}`$, simple with either the dot product or Law of Cosines:

$$
| \vec{r} |^3 = ( \vec{r} \cdot \vec{r} )^3/2 = a^3 (\beta^2 + 2\beta\cos(\theta) + 1)^{3/2}
$$

Altogether, we find the following for $`d\vec{H}`$:

$$
d\vec{H} = \frac{I\hat{k}}{4\pi a} \frac{(1-\beta\cos\theta)}{(\beta^2 + 2\beta\cos(\theta) + 1)^{3/2}} d\theta , \quad 0<\theta<2\pi
$$

Plugging in for B, we get:

$$
\vec{B}(\beta) = \frac{I\hat{k}}{4\pi a} \int_0^{2\pi}\frac{(1-\beta\cos\theta)}{(\beta^2 + 2\beta\cos(\theta) + 1)^{3/2}} d\theta
$$

We successfully separate the vector dependency from the equation so our solution is of the form:

$$
\vec{B}(\beta) = \vec{K} f(\beta) \qquad \vec{K}=\frac{\mu_0I\hat{k}}{4\pi a} 
$$

Accounting for the evenness of the integral, and adjusting shifting the variable $`\theta`$ by $`-\pi/2`$ we get our scalar integral:

$$
f(\beta) = 2\int_{-\pi/2}^{\pi/2} \frac{1+\beta\sin(\theta)}{(\beta^2+2\beta\sin(\theta)+1)^{3/2}} d\theta
$$
