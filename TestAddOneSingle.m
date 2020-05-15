classdef TestAddOneSingle < matlab.unittest.TestCase
    % Copyright 2014 - 2016 The MathWorks, Inc.
    
    methods ( Test )
        
        function reallyAddsOne( testCase )
            x = 1;
            y = addOneSingle( x );
            testCase.verifyEqual( y, single(2) );
        end
        
        function addsFraction( testCase )
            x = pi;
            y = addOneSingle( x );
            testCase.verifyEqual( y, single(x+1) );
        end
    end
end