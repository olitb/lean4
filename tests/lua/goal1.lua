local env = environment()
local A = Local("A", Type)
env = add_decl(env, mk_var_decl("eq", Pi(A, mk_arrow(A, A, Bool))))
local eq = Const("eq")
local a  = Local("a", A)
local b  = mk_local("b", "a", A)
local H  = Local("H", eq(A, a, b))
local hs = hypotheses(H, a, b, A)
local g = goal(hs, eq(A, b, a))
print(g)
assert(g:validate())
local m1 = g:mk_meta("m1", Bool)
print(tostring(m1))
print(env:type_check(m1))

assert(not goal(hypotheses(H, A, a, b), eq(A, b, a)):validate())
