module Linearizar where
    linearizar :: [[Int]] -> [Int]
    linearizar [] = []
    linearizar (x:lista) = x ++ (linearizar lista)