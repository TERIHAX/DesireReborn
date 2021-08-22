getgenv().DesireReborn = true

--[[ hookfunc gotten from this thread lmao: https://wearedevs.net/forum/t/21263/
getgenv().hookfunction = function(func, func_)
    func = func_
end
--]]

getgenv().getniggaballs = function()
    return "No Nigga Balls Found."
end

getgenv().getnigganuts = function()
    return "No Nigga Nuts Found."
end

local console =
{
	write = print,
    print = print,
    warn = warn,
    writeline = print    
}

-- Switch case gotten from here: https://wearedevs.net/forum/t/21348
getgenv().switch = function(E)
	return function (L)
		for _, V in pairs(L) do
			if V[1] == E then
				V[2]()
			elseif V[1] == "default" then
				V[2]()
			end
		end
	end
end

getgenv().case = function(E)
	return function(V)
		return { E, V[1] }
	end
end

getgenv().default = function(V)
	return { "default", V[1] }
end
