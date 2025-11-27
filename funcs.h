#ifndef FUNCS_H
#define FUNCS_H

#define MAX_UNIT_LEN 7

struct waveform{
    char type;
    float frequency;
    char f_units[MAX_UNIT_LEN];
    float amplitude;
    char a_units[MAX_UNIT_LEN];
    float dc_offset;
    char d_units[MAX_UNIT_LEN];
    float phase;
};

void generate_wf(void);
void save_load_wf(void);
void plot_wf(void);
void export_wf(void);
void presets(void);

#endif /*FUNCS_H*/