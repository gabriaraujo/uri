module Main where

import System.IO
import Data.Char
import Text.Printf

day :: String -> Bool
day e
    | read (dropWhile (/=' ') e) - read (takeWhile (/=' ') e) >= 3 = True
    | otherwise = False

text :: String -> Bool -> String
text e b
    | read (dropWhile (/=' ') e) - read (takeWhile (/=' ') e) <= 0 =
        "Eu odeio a professora!\n"
    | b == True = "Muito bem! Apresenta antes do Natal!\n"
    | b == False = "Parece o trabalho do meu filho!\n" ++ (st e)
        where
            st e = if read (dropWhile (/=' ') e) + 2 <= 24
                    then "TCC Apresentado!\n"
                    else "Fail! Entao eh nataaaaal!\n"

main :: IO ()
main = do
    input <- getLine
    putStr $ (text input (day input))
