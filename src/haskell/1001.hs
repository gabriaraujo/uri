module Main where

import System.IO

soma :: Num a => a -> a -> a
soma a b = a + b

main = do
    a <- readLn
    b <- readLn
    putStr $ "X = ";
    print (soma a b)