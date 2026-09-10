// Address: 0056fd44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0056fd44(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x40))(param_2,1);
  (**(code **)(*param_2 + 0x34))(param_2,0x100);
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)FUN_004303f0(param_2,iVar2);
    *puVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 != 0x100);
  return;
}

