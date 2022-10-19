struct Hello {
    Hello(const char*) {}
};


int main() {
    auto answer = [](Hello _ = Hello("world")) -> int { return 42; };
    return answer();
}
