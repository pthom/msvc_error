struct ImVec2
{
    float                                   x, y;
    ImVec2(float _x, float _y)    : x(_x), y(_y) { }
};


bool blah2()
{
    auto f = [](const ImVec2 & size = ImVec2(0, 0)) -> bool
    {
        return true;
    };
    return f();
}

int main()
{
    return blah2() ? 1: 0;
}