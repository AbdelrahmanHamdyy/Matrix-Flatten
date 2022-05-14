<div align="center">

# Matrix Flatten

 <img src="screenshots/task3.jpg">
 
</div>

## 📙 About
* A 3D matrix is to be stored in a 1D vector (flattened).
## 📝 Description
* Convert the 3D matrix index (i, j, k) to a suitable 1D vector index (y). Must be O(1).

## 🏁 Getting Started

## Complexity

- The complexity of indexing from i, j, k to y is **O(1)**
- The indexing formula for the conversion from 3D element position to 1D is y = (i * m * p) + (j * p) + k
- The complexity of looping through the 3D vector is **O(n\*m\*p)** = **O(N)** where N is the number of elements 

## Dependencies

* C++

## 💻 Installing

```
git clone https://github.com/abdelrahman0123/Matrix-Flatten 
```

```
g++ Main.cpp
```

```
./a.out
```

### 📷 Screenshots

#### Fill 3D matrix with unique numbers
![start](screenshots/1.jpg)

#### Convert 3D matrix into 1D vector using the formula y = i * m * p + j * p + k
![start](screenshots/2.jpg)

#### Test random cases
![start](screenshots/3.jpg)
![start](screenshots/4.jpg)
![start](screenshots/5.jpg)


## Contributors

<table>
<tr>
<td align="center">
<a href="https://github.com/abdelrahman0123" target="_blank">
<img src="https://avatars.githubusercontent.com/u/67989900?v=4" width="150px;" alt="Abdelrahman Hamdy"/><br /><sub><b>Abdelrahman Hamdy</b></sub></a><br />
</td>
</tr>
 </table>

## License

This project is licensed under the [MIT] License - see the [LICENSE.md](LICENSE) file for details
