#!/usr/bin/env lua
-------------------------------------------------------------------------------
--
-- Preprocessor for embedded lua code within arbitrary text files. 
--
-------------------------------------------------------------------------------

local templateFileName, outputFileName = ...

local emlua = require("emlua")
emlua.dofile(templateFileName, outputFileName)

