module Main where

import System.IO
import Data.Char
import Text.Printf

conta :: Char -> [String] -> Int
conta c st = length [x | x <- st, c `elem` x]

palavras :: String -> Int
palavras = length . words

letras :: Char -> String -> Double
letras c st = fromIntegral (conta c (words st))

showPorcent :: Double -> String
showPorcent = printf "%.1f"

porcent :: Char -> String -> Double
porcent c st = read (showPorcent (100.0 * (letras c st) / fromIntegral (palavras st)))

main = do
    a <- getChar
    _ <- getLine
    b <- getLine
    print (porcent a b)
