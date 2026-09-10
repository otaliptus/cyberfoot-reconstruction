// Address: 0051c830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c830(int *param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 0;
  (**(code **)*param_1)();
  param_1[0x1e] = param_1[0x1e] + 1;
  if (param_1[0x20] <= param_1[0x1e]) {
    param_1[0xf] = param_1[0xf] + 1;
    param_1[0x20] = param_1[0x20] + (1 << ((char)param_1[0xf] - 1U & 0x1f));
  }
  if (param_1[0x1f] <= param_1[0x1e]) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

