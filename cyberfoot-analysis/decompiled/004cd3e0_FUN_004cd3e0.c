// Address: 004cd3e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cd3e0(int *param_1,short *param_2,undefined4 param_3)

{
  FUN_0046b914(param_1,param_2,param_3);
  if ((*param_2 == 0xd) || (*param_2 == 0x20)) {
    if (param_1[0x8e] == 0) {
      *(undefined1 *)((int)param_1 + 0x211) = 0;
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      *(byte *)((int)param_1 + 0x211) = *(byte *)((int)param_1 + 0x211) ^ 1;
      *(byte *)((int)param_1 + 0x233) = *(byte *)((int)param_1 + 0x233) ^ 1;
      if (*(char *)((int)param_1 + 0x211) != '\0') {
        *(undefined1 *)(param_1 + 0x8c) = 4;
      }
      FUN_004d0164(param_1);
    }
  }
  (**(code **)(*param_1 + 0x80))();
  return;
}

