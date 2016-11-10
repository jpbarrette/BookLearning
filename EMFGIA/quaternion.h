

struct emgQuaternion
{
    float i;
    float j;
    float k;
    float w;
};

void emgQadd(emgQuaternion& dest, emgQuaternion& lhs, emgQuaternion& rhs)
{
    dest.i = lhs.i + rhs.i;
    dest.j = lhs.j + rhs.j;
    dest.k = lhs.k + rhs.k;
    dest.w = lhs.w + rhs.w;
}

void emgQsub(emgQuaternion& dest, emgQuaternion& lhs, emgQuaternion& rhs)
{
    dest.i = lhs.i - rhs.i;
    dest.j = lhs.j - rhs.j;
    dest.k = lhs.k - rhs.k;
    dest.w = lhs.w - rhs.w;
}

void emgQmul(emgQuaternion& dest, emgQuaternion& lhs, emgQuaternion& rhs)
{
    dest.i = (lhs.j * rhs.k - rhs.j * lhs.k) + (lhs.w * rhs.i) + (rhs.w * lhs.i);
    dest.j = (lhs.k * rhs.i - rhs.k * lhs.j) + (lhs.w * rhs.j) + (rhs.w * lhs.j);
    dest.k = (lhs.i * rhs.j - rhs.i * lhs.j) + (lhs.w * rhs.k) + (rhs.w * lhs.k);
    dest.w = 
}






