getgenv().DesireReborn = true

-- hookfunc gotten from this thread lmao: https://wearedevs.net/forum/t/21263/
getgenv().hookfunction = function(func, func_)
    func = func_
end

getgenv().hookfunctions = function(func, func_)
    func = func_
end

getgenv().hookfunc = function(func, func_)
    func = func_
end

getgenv().hookfuncs = function(func, func_)
    func = func_
end

getgenv().connectfunction = function(func, func_)
    func = func_
end

getgenv().connectfunctions = function(func, func_)
    func = func_
end

getgenv().connectfuncs = function(func, func_)
    func = func_
end

getgenv().connectfunc = function(func, func_)
    func = func_
end

getgenv().loadtext = function(url)
    loadstring(game:HttpGet(url))()
end
