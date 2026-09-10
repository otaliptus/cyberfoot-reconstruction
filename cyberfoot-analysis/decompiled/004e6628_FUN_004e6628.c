// Address: 004e6628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e6628(uint param_1,DWORD param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((int)param_1 < 0) {
    param_1 = GetSysColor(param_1 & 0xff);
  }
  if ((int)param_2 < 0) {
    param_2 = GetSysColor(param_2 & 0xff);
  }
  FUN_004080c0(param_1);
  FUN_004080c4(param_1);
  FUN_004080c8(param_1);
  FUN_004080c0(param_2);
  FUN_004080c4(param_2);
  FUN_004080c8(param_2);
  uVar1 = FUN_00402c38();
  uVar2 = FUN_00402c38();
  uVar3 = FUN_00402c38();
  FUN_004080a4(uVar1,uVar2,uVar3);
  return;
}

