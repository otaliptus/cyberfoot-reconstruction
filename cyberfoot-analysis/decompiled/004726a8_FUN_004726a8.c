// Address: 004726a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004726a8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  FUN_004272b8(param_1,param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  cVar2 = FUN_00403c10(uVar1,PTR_PTR_00471d98);
  if (cVar2 != '\0') {
    FUN_00472750(param_1,uVar1);
  }
  return;
}

