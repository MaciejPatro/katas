# Strong typing


## Exercise
* Using [NamedType](https://github.com/joboccara/NamedType) implement a solution for handling correctly different measurement units for 
distances. 
    * For `SI` units.
    * For British imperial units.
    
* create user-defined literals for `SI` units

* test the solution within `googletest` framework.

expected test:
```cpp

TEST(distance_strong_types, should_consistently_convert_between_meters_and_kilometers)
{
    EXPECT_EQ(100.0_meters, 0.1_kilometers); 
}

```