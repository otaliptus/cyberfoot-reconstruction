// Address: 004822dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004822dc(int param_1,int param_2,char param_3)

{
  char cVar1;
  
  if (param_3 != '\0') {
    cVar1 = thunk_FUN_004694e1(param_2,*(undefined4 *)(param_1 + 0x224));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  cVar1 = thunk_FUN_004694e1(param_2,*(undefined4 *)(param_1 + 0x220));
  if (cVar1 != '\0') {
    FUN_00482224(param_1,0);
  }
  return;
}

