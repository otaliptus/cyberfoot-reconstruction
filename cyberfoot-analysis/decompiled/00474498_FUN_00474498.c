// Address: 00474498
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00474498(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,byte param_5
                 ,byte param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x30))
              (param_1,param_7,param_2,
               CONCAT31((int3)((*(uint *)(&DAT_006630d4 + (uint)param_6 * 4) |
                               *(uint *)(&DAT_006630e4 + (uint)param_5 * 4)) >> 8),param_4),
               *(uint *)(&DAT_006630d4 + (uint)param_6 * 4) |
               *(uint *)(&DAT_006630e4 + (uint)param_5 * 4),param_8,param_3);
  }
  return;
}

