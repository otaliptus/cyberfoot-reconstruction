// Address: 004d4f78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4f78(short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    uVar2 = FUN_00408024(*param_1);
    sVar1 = FUN_00408000(uVar2,(char)*param_1);
    *param_1 = sVar1;
  }
  return;
}

