// Address: 0047e194
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e194(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  while (param_1 != (undefined4 *)0x0) {
    BVar2 = IsWindow((HWND)param_1[1]);
    if (BVar2 != 0) {
      EnableWindow((HWND)param_1[1],-1);
    }
    puVar1 = (undefined4 *)*param_1;
    FUN_0040281c(param_1,8);
    param_1 = puVar1;
  }
  return;
}

