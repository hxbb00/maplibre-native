uniform mat4 u_matrix;
uniform vec2 u_dimension;

layout (location = 0) in vec2 a_pos;
layout (location = 1) in vec2 a_texture_pos;

out vec2 v_pos;

void main() {
    gl_Position = u_matrix * vec4(a_pos, 0, 1);

    highp vec2 epsilon = 1.0 / u_dimension;
    float scale = (u_dimension.x - 2.0) / u_dimension.x;
    v_pos = (a_texture_pos / 8192.0) * scale + epsilon;
}
