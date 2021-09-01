module Substituir where
    substituir :: Int -> Int -> [Int] -> [Int]
    substituir a b [] = []
    substituir a b (elemento:lista) =  if (elemento==a) then [b] ++ substituir a b lista else [elemento] ++ substituir a b lista