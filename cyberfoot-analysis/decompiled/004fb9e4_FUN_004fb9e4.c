// Address: 004fb9e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fb9e4(int param_1,int param_2)

{
  char cVar1;
  
  FUN_0050a14c(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004f9f08);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    FUN_0040502c(param_1 + 0xd8,*(undefined4 *)(param_2 + 0xd8));
    FUN_0040502c(param_1 + 0xdc,*(undefined4 *)(param_2 + 0xdc));
  }
  return;
}

