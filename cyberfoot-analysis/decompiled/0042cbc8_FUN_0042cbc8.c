// Address: 0042cbc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042cbc8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar2 = *(undefined4 *)(*param_1 + 0x44);
  piVar4 = param_1;
  uVar1 = FUN_0042cb70();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0042cc0c,uVar1,uVar2,param_1,uVar3,piVar4);
  return;
}

