// Address: 00406d44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406d44(undefined4 *param_1,undefined4 param_2)

{
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_408 [1024];
  
  lpBuffer = local_408;
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0x10000) {
      iVar1 = 0x400;
      uID = param_1[1];
      hInstance = (HINSTANCE)FUN_004062b0(*(undefined4 *)*param_1);
      iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
      FUN_004049c4(param_2,local_408,iVar1);
    }
    else {
      FUN_00404adc(param_2,param_1[1]);
    }
  }
  return;
}

