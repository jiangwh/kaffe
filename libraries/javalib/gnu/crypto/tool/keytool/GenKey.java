/* Command.java -- a keytool command.
   Copyright (C) 2004  Free Software Foundation, Inc.

This file is part of GNU Crypto.

GNU Crypto is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

GNU Crypto is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to the
Free Software Foundation Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307  USA  */


package gnu.crypto.tool.keytool;

import java.security.Provider;
import javax.security.auth.callback.CallbackHandler;

class GenKey extends Command
{

  // Constructors.
  // -------------------------------------------------------------------------

  GenKey (Command previous)
  {
    super (previous);
  }

  // Instance methods.
  // -------------------------------------------------------------------------

  public String toString()
  {
    return "generate-key";
  }
}
