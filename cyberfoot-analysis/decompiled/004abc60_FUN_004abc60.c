// Address: 004abc60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004abc60(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004ab7f0(param_1,param_3);
  uVar1 = *(undefined1 *)(iVar2 + param_2);
  uVar3 = FUN_004080a4(uVar1,uVar1,uVar1);
  return uVar3;
}

