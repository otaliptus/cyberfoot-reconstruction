// Address: 004566cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004566cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x84))();
  if (cVar2 != '\0') {
    iVar1 = param_1[8];
    FUN_00403c34(iVar1,PTR_PTR_00446d98);
    FUN_00451e5c(iVar1,param_2);
  }
  return;
}

