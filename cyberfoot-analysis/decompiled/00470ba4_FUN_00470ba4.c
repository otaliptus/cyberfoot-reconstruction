// Address: 00470ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00470ba4(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_0046ee90(param_2);
    iVar1 = FUN_0046ea14(param_2);
    local_c = local_c + iVar1;
  }
  else {
    local_c = FUN_0046ee90(*(int *)(param_2 + 0xc));
  }
  FUN_00470b14(*(undefined4 *)(*(int *)(param_1 + 100) + 8));
  return local_c;
}

